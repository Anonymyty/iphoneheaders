/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 6:00:01 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSKExporter <NSObject>
@optional
-(void)setBuildVersionHistory:(id)arg1;
-(id)documentSpecificTypeUTI;
-(BOOL)isExportSupported;
-(id)exportPathForOutputPath:(id)arg1;
-(void)setUsePackageFormat:(BOOL)arg1;
-(BOOL)needsSupplementalFiles;
-(void)setQuickLookThumbnail:(id)arg1;
-(void)enableRenderAllContent;
-(id)savePanelMessage;
-(void)setSaveToURL:(id)arg1;
-(id)progress;
-(void)setOptions:(id)arg1;
-(void)setTypeUTI:(id)arg1;
-(id)typeUTI;

@required
-(id)initWithDocumentRoot:(id)arg1;
-(BOOL)exportToURL:(id)arg1 delegate:(id)arg2 error:(id*)arg3;
-(void)cancel;
-(BOOL)isCancelled;
-(void)setProgressContext:(id)arg1;
-(id)progressContext;
-(void)quit;

@end
