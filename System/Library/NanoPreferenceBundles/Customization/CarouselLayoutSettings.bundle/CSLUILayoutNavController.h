/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:33:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class CSLUILayoutViewController;

@interface CSLUILayoutNavController : UINavigationController {

	CSLUILayoutViewController* _layoutViewController;

}

@property (nonatomic,retain) CSLUILayoutViewController * layoutViewController;              //@synthesize layoutViewController=_layoutViewController - In the implementation block
-(void)resetIconPositions;
-(void)setLayoutViewController:(CSLUILayoutViewController *)arg1 ;
-(CSLUILayoutViewController *)layoutViewController;
-(id)init;
@end

