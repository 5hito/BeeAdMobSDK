//
//  BeeMobManager.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/7/12.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeMobManager : NSObject

+ (void)showAppAlert;

+ (void)setDefaultInterstitialGGId:(NSString*)ggUnitId;
+ (void)setStopShowInterstitialAd;

+ (void)setDefaultProductId:(NSString*)productID;

+ (void)setUserVip:(BOOL)isVip;

@end
