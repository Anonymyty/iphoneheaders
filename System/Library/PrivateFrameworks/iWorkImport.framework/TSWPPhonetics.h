/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSWPPhonetics : NSObject {

	NSDictionary* _transcribers;

}
+(id)sharedDictionary;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)_singletonAlloc;
-(id)pronunciationForBaseText:(id)arg1 locale:(id)arg2 inputLanguage:(id)arg3 ;
-(id)transcriberWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

