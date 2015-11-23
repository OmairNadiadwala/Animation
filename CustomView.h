//
//  CustomView.h
//
//  Code generated using QuartzCode 1.38.4 on 11/11/2015.
//  www.quartzcodeapp.com
// My Committed

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface CustomView : UIView

@property (nonatomic, strong) UIColor * grayColor;
@property (nonatomic, strong) UIColor * progressColor;
@property (nonatomic, strong) UIColor * finishColor;
@property (nonatomic, assign) CGFloat  oldAnimProgress;

- (void)addOldAnimation;
- (void)addOldAnimationCompletionBlock:(void (^)(BOOL finished))completionBlock;
- (void)removeAnimationsForAnimationId:(NSString *)identifier;
- (void)removeAllAnimations;

@end
