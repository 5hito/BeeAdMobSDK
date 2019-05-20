//
//  BeeMobFloatingWindowView.h
//  BeeAdMobSDK
//
//  Created by linshucan on 2018/6/25.
//  Copyright © 2018年 Bee. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BeeFloatingWindowView;
@protocol BeeMobFloatingWindowViewDelegate <NSObject>

@optional
- (void)beeMobFloatingWindowDidReceived;
- (void)beeMobFloatingWindowFailToReceived:(NSError*)error;
- (void)beeMobFloatingWindowClicked;
- (void)beeMobFloatingWindowClickCloseFinish;
- (void)beeMobFloatingWindowClosed;

@end

@interface BeeMobFloatingWindowView : UIView

@property (nonatomic, weak) id<BeeMobFloatingWindowViewDelegate> delegate;
@property (nonatomic, weak) UIViewController* rootController;
@property (nonatomic, assign) CGPoint viewPoint;
@property (nonatomic, assign) BOOL bShowClose;

- (void)loadAdRequest;

@end
