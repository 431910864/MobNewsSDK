
//
//  BMNSDKApi.h
//  LKADSDK
//
//  Created by 兵伍 on 2019/3/15.
//  Copyright © 2019 兵伍. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MobNewsSDK/MobNewsConfigModel.h>
#import <MobNewsSDK/MobNewsSDKCallbackDelegate.h>
#import <MobNewsSDK/MobNewsSDKProtocols.h>

@interface MobNewsSDKApi : NSObject
/**当前：2.2.0(1)
 * @return SDK 版本
 */
+ (NSString *)sdkVersion;

/**
 * SDK 初始化接口
 * @param config 配置类对象
 * @return 是否初始化成功，1：成功；0：失败；
 */
+ (BOOL)setupWithConfig:(MobNewsConfigModel *)config;

/**
 * 获取配置类对象
 * @return 配置类MobNewsConfigModel实例
 */
+ (MobNewsConfigModel *)getConfig;

/**
 * 设置SDK回调接口代理
 * @param delegate 代理对象
 */
+ (void)setCallbackDelegate:(id<MobNewsSDKCallbackDelegate>)delegate;

#pragma mark - 资讯

/**
 * 返回多频道的ViewController
 * @param params 非下级页传nil，下级页可传入@{@"title": @"资讯"}设置导航标题
 * @return 多频道的ViewController实例
 */
+ (UIViewController <BMFeedListVCProtocol> *)multiTabFeedListWithParams:(NSDictionary *)params;

/**
 * 返回单频道的ViewController
 * @param channel 频道名称，如：推荐，热点，科技。。。（多频道的ViewController中的channel）
 * @return 单频道的ViewController实例
 */
+ (UIViewController *)singleTabFeedListWithChannel:(NSString *)channel;

@end


