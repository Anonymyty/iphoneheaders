/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:25 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/ABVCardParser.h>

@class NSMutableDictionary, NSData;

@interface ABVCardCardDAVParser : ABVCardParser {

	NSMutableDictionary* _unknownAttributes;
	BOOL _removeExistingProperties;
	BOOL _localRecordHasAdditionalProperties;
	int _lastCropRectX;
	int _lastCropRectY;
	int _lastCropRectWidth;
	int _lastCropRectHeight;
	NSData* _lastCropRectChecksum;

}

@property (readonly) BOOL localRecordHasAdditionalProperties;              //@synthesize localRecordHasAdditionalProperties=_localRecordHasAdditionalProperties - In the implementation block
@property (readonly) int lastCropRectX;                                    //@synthesize lastCropRectX=_lastCropRectX - In the implementation block
@property (readonly) int lastCropRectY;                                    //@synthesize lastCropRectY=_lastCropRectY - In the implementation block
@property (readonly) int lastCropRectWidth;                                //@synthesize lastCropRectWidth=_lastCropRectWidth - In the implementation block
@property (readonly) int lastCropRectHeight;                               //@synthesize lastCropRectHeight=_lastCropRectHeight - In the implementation block
@property (retain,readonly) NSData * lastCropRectChecksum;                 //@synthesize lastCropRectChecksum=_lastCropRectChecksum - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(void)cleanUpCardState;
-(id)defaultLabel;
-(void)setLocalRecordHasAdditionalProperties:(BOOL)arg1 ;
-(void)noteLackOfValueForProperty:(unsigned)arg1 ;
-(id)genericLabel;
-(BOOL)parseUID;
-(id)defaultURLLabel;
-(BOOL)_handleUnknownTag:(id)arg1 withValue:(id)arg2 ;
-(void)noteLackOfValueForImageData;
-(id)defaultADRLabel;
-(BOOL)importToPerson:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(BOOL)importToGroup:(void*)arg1 removeExistingProperties:(BOOL)arg2 ;
-(void*)createRecordInSource:(void*)arg1 outRecordType:(unsigned*)arg2 ;
-(BOOL)localRecordHasAdditionalProperties;
-(int)lastCropRectX;
-(int)lastCropRectY;
-(int)lastCropRectWidth;
-(int)lastCropRectHeight;
-(NSData *)lastCropRectChecksum;
@end
