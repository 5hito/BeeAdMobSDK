//
//  BeeMobAppRecommendEntity.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/11/14.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BeeMobAppRecommendEntity : NSObject

@property (nonatomic, strong) NSString* appName;
@property (nonatomic, strong) NSString* appDescribe;
@property (nonatomic, strong) NSString* appBundleId;
@property (nonatomic, strong) NSString* appId;
@property (nonatomic, strong) NSString* appImage;
@property (nonatomic, assign) BOOL appIsPro;

@end


