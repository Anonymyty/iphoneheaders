/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:04:44 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShow/MobileSlideShow-Structs.h>
#import <CoreFoundation/NSData.h>

@class NSData, NSString;

@interface PLSUUID : NSData {

	NSData* _data;

}

@property (retain,readonly) NSString * stringValue; 
@property (retain,readonly) NSString * photoBase64String; 
+(id)photoBase64UUIDsFromUUIDs:(id)arg1 ;
+(id)generateUUIDAsString;
+(long long)numberBytes;
+(id)uuidWithData:(id)arg1 ;
+(id)uuidWithString:(id)arg1 ;
+(id)uuid;
-(id)initWithPhotoBase64String:(id)arg1 ;
-(void)_dataFromCFUUID:(CFUUIDRef)arg1 ;
-(NSString *)photoBase64String;
-(Class)classForArchiver;
-(Class)classForPortCoder;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)length;
-(const void*)bytes;
-(Class)classForCoder;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(BOOL)isEqualToData:(id)arg1 ;
@end

