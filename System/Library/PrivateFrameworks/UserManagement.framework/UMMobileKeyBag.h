/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:48 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UMMobileKeyBag : NSObject
+(BOOL)inSyncBubble;
+(void)initialize;
+(int)foregroundUID;
+(id)_userAttributesForUID:(unsigned)arg1 ;
+(double)passcodeBackOffIntervalForUser:(id)arg1 ;
+(void)_setPasscodeTypeOnUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)personaSpecForUser:(id)arg1 ;
+(void)_setAttributes:(id)arg1 onUser:(id)arg2 ;
+(id)_mutablePersonaSpecBase;
+(id)userUIDs;
+(id)currentUserSwitchContext;
+(void)currentUserSwitchContextHasBeenUsed;
+(id)loadUser:(id)arg1 withPasscodeData:(id)arg2 ;
+(id)deleteUser:(id)arg1 ;
+(id)userFromAttributes:(id)arg1 ;
+(void)fetchAttributesForUser:(id)arg1 ;
+(BOOL)writeAttributesToDiskForUser:(id)arg1 ;
+(id)taskFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryRepresentationOfTask:(id)arg1 ;
+(unsigned long long)userType;
+(BOOL)isMultiUser;
+(unsigned long long)maxNumberOfUsers;
@end

