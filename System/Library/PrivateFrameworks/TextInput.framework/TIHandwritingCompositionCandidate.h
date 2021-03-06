/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidateSingle.h>

@interface TIHandwritingCompositionCandidate : TIKeyboardCandidateSingle {

	unsigned long long _deleteCount;

}
+(int)type;
+(BOOL)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCandidate:(id)arg1 deleteCount:(unsigned long long)arg2 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned long long)deleteCount;
@end

