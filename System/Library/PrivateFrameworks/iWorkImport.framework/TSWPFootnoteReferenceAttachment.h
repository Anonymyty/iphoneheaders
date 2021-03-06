/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextualAttachment.h>

@class TSWPStorage, NSString;

@interface TSWPFootnoteReferenceAttachment : TSWPTextualAttachment {

	TSWPStorage* _containedStorage;
	NSString* _customMarkString;

}

@property (nonatomic,retain) TSWPStorage * containedStorage;              //@synthesize containedStorage=_containedStorage - In the implementation block
@property (nonatomic,retain) NSString * customMarkString;                 //@synthesize customMarkString=_customMarkString - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)supportsUUID;
-(const TextualAttachmentArchive*)textualAttachmentArchiveFromUnarchiver:(id)arg1 ;
-(BOOL)shouldArchiveStringEquivalent;
-(id)copyWithContext:(id)arg1 ;
-(TSWPStorage *)containedStorage;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)setParentStorage:(id)arg1 ;
-(id)stringEquivalent;
-(NSString *)customMarkString;
-(unsigned long long)findCharIndex;
-(id)objectsForStyleMigrating;
-(void)setContainedStorage:(TSWPStorage *)arg1 ;
-(id)initWithContext:(id)arg1 wpStorage:(id)arg2 ;
-(void)applyMark;
-(void)setCustomMarkString:(NSString *)arg1 ;
-(void)setContainedStorageParentInfoToStorage:(id)arg1 ;
-(void)checkDebug;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(int)elementKind;
-(BOOL)isSearchable;
@end

