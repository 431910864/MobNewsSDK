//
//  MobNewsSDKCallbackDelegate.h
//  LKADSDK
//
//  Created by 兵伍 on 2019/8/5.
//  Copyright © 2019 兵伍. All rights reserved.
//
#import "MobNewsSDKProtocols.h"

#ifndef MobNewsSDKCallbackDelegate_h
#define MobNewsSDKCallbackDelegate_h

@protocol MobNewsSDKCallbackDelegate <NSObject>
@optional

#pragma mark - 资讯详情回调
/**
* SDK 资讯详情打开成功
* @param countDownView 倒计时视图实例
* @param info 包含 url、type
*
*/
- (void)news_newsDetailDidLoadSuccessWithInfo:(NSDictionary *)info countDownView:(UIView<LKADCountDownViewProtocol> *)countDownView;

/**
* SDK 资讯详情关闭
* @param info 包含 url、type
*
*/
- (void)news_newsDetailDidCloseWithInfo:(NSDictionary *)info;

/**
* SDK 资讯详情倒计时结束
* @param countDownView 倒计时视图实例
* @param info 包含 url、type
*
*/
- (void)news_newsDetailDidCountDownEndWithInfo:(NSDictionary *)info countDownView:(UIView<LKADCountDownViewProtocol> *)countDownView;

/**
* SDK 资讯详情点击倒计时
* @param countDownView 倒计时视图实例
*
*/
- (void)news_newsDetailCountDownViewDidClick:(UIView<LKADCountDownViewProtocol> *)countDownView;

@end

#endif /* MobNewsSDKCallbackDelegate_h */
