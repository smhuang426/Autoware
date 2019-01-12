/*
 * Matcherx.h
 *
 *  Created on: Jan 12, 2019
 *      Author: sujiwo
 */

#ifndef _MATCHER_H_
#define _MATCHER_H_

#include <vector>
#include <map>
#include <set>

#include "VMap.h"
#include "KeyFrame.h"


class Matcher {
public:

	static void
	matchForInitialization(
		const KeyFrame &kf1,
		const KeyFrame &kf2,
		std::vector<FeaturePair> &featurePairs,
		cv::Ptr<cv::DescriptorMatcher> matcher);

protected:

	static cv::Mat
	createMatcherMask(
		const KeyFrame &kf1, const KeyFrame &kf2,
		const std::vector<kpid> &kp1List, const std::vector<kpid> &kp2List);

	static cv::Mat
	createMatcherMask(
		const KeyFrame &kf1, const KeyFrame &kf2,
		const std::map<kpid, std::set<kpid>> &map1to2);

};

#endif /* _MATCHER_H_ */
