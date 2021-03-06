/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:47 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;

}
+(id)fakePaymentSetupFields;
+(id)defaultPaymentSetupFields;
-(double)minimumRequiredWidthForFieldIdentifiers:(id)arg1 withFont:(id)arg2 ;
-(void)dealloc;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(id)paymentSetupFieldIdentifiers;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(id)incompletePaymentSetupFields;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
-(id)paymentSetupFields;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(id)submissionValuesForDestination:(id)arg1 ;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
-(void)resetAllPaymentSetupFieldValues;
@end

