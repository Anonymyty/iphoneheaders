/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 3:20:05 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBFeedInbox : PBCodable <NSCopying> {

	NSMutableArray* _feedItemBatches;
	NSMutableArray* _prewarmingArticleIds;

}

@property (nonatomic,retain) NSMutableArray * feedItemBatches;                   //@synthesize feedItemBatches=_feedItemBatches - In the implementation block
@property (nonatomic,retain) NSMutableArray * prewarmingArticleIds;              //@synthesize prewarmingArticleIds=_prewarmingArticleIds - In the implementation block
-(void)setFeedItemBatches:(NSMutableArray *)arg1 ;
-(void)setPrewarmingArticleIds:(NSMutableArray *)arg1 ;
-(void)addFeedItemBatches:(id)arg1 ;
-(void)addPrewarmingArticleIds:(id)arg1 ;
-(void)clearFeedItemBatches;
-(unsigned long long)feedItemBatchesCount;
-(id)feedItemBatchesAtIndex:(unsigned long long)arg1 ;
-(void)clearPrewarmingArticleIds;
-(unsigned long long)prewarmingArticleIdsCount;
-(id)prewarmingArticleIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)feedItemBatches;
-(NSMutableArray *)prewarmingArticleIds;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end
