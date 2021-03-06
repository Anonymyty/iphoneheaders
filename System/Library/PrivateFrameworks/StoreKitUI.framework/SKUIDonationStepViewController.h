/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:55:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class SKUIGiftCharity, SKUIDonationConfiguration, NSOperationQueue;

@interface SKUIDonationStepViewController : UIViewController {

	SKUIGiftCharity* _charity;
	SKUIDonationConfiguration* _configuration;
	NSOperationQueue* _operationQueue;

}

@property (nonatomic,readonly) SKUIGiftCharity * charity;                                      //@synthesize charity=_charity - In the implementation block
@property (nonatomic,readonly) SKUIDonationConfiguration * donationConfiguration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                                //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)initWithCharity:(id)arg1 configuration:(id)arg2 ;
-(SKUIGiftCharity *)charity;
-(SKUIDonationConfiguration *)donationConfiguration;
@end

