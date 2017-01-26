/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:28:27 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /usr/libexec/pipelined
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLIndoorTilePrefetcherDelegate <NSObject>
@required
-(BOOL)tilePrefetchShouldPrefetchMetadataForFloor:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1;
-(BOOL)tilePrefetchShouldPrefetchTileDataForFloor:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1;
-(void)tilePrefetchForFloor:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg1 inVenue:(const basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >*)arg2 updateRelevancy:(id)arg3;
-(void)tilePrefetchDidDownload:(const path*)arg1 forRequest:(id)arg2;
-(void)tilePrefetchFinishedAllDownloads;

@end
