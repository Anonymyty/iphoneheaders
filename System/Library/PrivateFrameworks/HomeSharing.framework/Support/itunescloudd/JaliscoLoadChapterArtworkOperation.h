/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:15:51 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class ML3MusicLibrary, NSDictionary, NSString, NSURLSession, NSOperationQueue;

@interface JaliscoLoadChapterArtworkOperation : CloudLibraryOperation {

	ML3MusicLibrary* _musicLibrary;
	NSDictionary* _chapterArtworkToLoad;
	NSString* _powerAssertionIdentifier;
	NSURLSession* _artworkDownloadSession;
	NSOperationQueue* _artworkDownloadOperationQueue;

}
-(void)cancel;
-(id)initWithDictionary:(id)arg1 ;
-(void)main;
@end

