//
//  BeeMobManager.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/7/12.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeMobManager : NSObject

+ (void)setUserVip:(BOOL)isVip;
+ (void)setDefaultProductId:(NSString*)productID;

+ (void)setDefaultInterstitialGGId:(NSString*)ggUnitId;
+ (void)setStopShowInterstitialAd;

+ (void)showAppAlert;

@end
