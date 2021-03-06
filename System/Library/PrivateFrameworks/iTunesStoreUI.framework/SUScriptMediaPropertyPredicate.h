/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:12 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, MPMediaPropertyPredicate;

@interface SUScriptMediaPropertyPredicate : SUScriptObject {

	NSString* _comparisonType;
	NSString* _property;
	id _value;

}

@property (nonatomic,readonly) MPMediaPropertyPredicate * nativePredicate; 
@property (readonly) NSString * comparisonType; 
@property (readonly) NSString * property; 
@property (readonly) id value; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)value;
-(id)attributeKeys;
-(MPMediaPropertyPredicate *)nativePredicate;
-(id)initWithProperty:(id)arg1 value:(id)arg2 comparisonType:(id)arg3 ;
-(id)_playlistAttributesForScriptArray:(id)arg1 ;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)comparisonType;
-(NSString *)property;
@end

