/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:37 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <TSUtility/SFUDataRepresentation.h>

@class TSPDatabase;

@interface TSPDatabaseDataRepresentation : SFUDataRepresentation {

	TSPDatabase* _database;
	long long _identifier;

}
-(id)initWithDatabase:(id)arg1 identifier:(long long)arg2 ;
-(sqlite3_blobRef)_openBlob;
-(ZeroCopyInputStream*)createProtobufInputStream;
-(long long)dataLength;
-(id)inputStream;
-(BOOL)hasSameLocationAs:(id)arg1 ;
@end

