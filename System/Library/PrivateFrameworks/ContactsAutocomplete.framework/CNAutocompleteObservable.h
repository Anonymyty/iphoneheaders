/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:40:14 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>

@class NSString, CNObservable;

@interface CNAutocompleteObservable : CNObservable {

	NSString* _debugDescription;
	CNObservable* _observable;

}

@property (nonatomic,retain) NSString * debugDescription;              //@synthesize debugDescription=_debugDescription - In the implementation block
@property (nonatomic,retain) CNObservable * observable;                //@synthesize observable=_observable - In the implementation block
-(NSString *)debugDescription;
-(id)subscribe:(id)arg1 ;
-(void)setDebugDescription:(NSString *)arg1 ;
-(CNObservable *)observable;
-(void)setObservable:(CNObservable *)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end
