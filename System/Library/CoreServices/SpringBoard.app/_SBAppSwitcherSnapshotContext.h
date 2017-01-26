/*
* This header is generated by classdump-dyld 1.0
* on Thursday, January 26, 2017 at 12:04:22 AM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class XBApplicationSnapshot, SBSwitcherSnapshotImageView;

@interface _SBAppSwitcherSnapshotContext : NSObject {

	XBApplicationSnapshot* _snapshot;
	SBSwitcherSnapshotImageView* _snapshotImageView;
	CGRect _snapshotReferenceFrame;

}

@property (nonatomic,retain) XBApplicationSnapshot * snapshot;                             //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherSnapshotImageView * snapshotImageView;              //@synthesize snapshotImageView=_snapshotImageView - In the implementation block
@property (assign,nonatomic) CGRect snapshotReferenceFrame;                                //@synthesize snapshotReferenceFrame=_snapshotReferenceFrame - In the implementation block
-(SBSwitcherSnapshotImageView *)snapshotImageView;
-(void)setSnapshotImageView:(SBSwitcherSnapshotImageView *)arg1 ;
-(CGRect)snapshotReferenceFrame;
-(void)setSnapshotReferenceFrame:(CGRect)arg1 ;
-(XBApplicationSnapshot *)snapshot;
-(void)setSnapshot:(XBApplicationSnapshot *)arg1 ;
@end
