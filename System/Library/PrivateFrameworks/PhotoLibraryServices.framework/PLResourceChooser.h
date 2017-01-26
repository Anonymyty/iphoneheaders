/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:30 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLResourceChooser : NSObject
+(id)fileReservationForLargeDisplayableImageFileForAsset:(id)arg1 forceLarge:(BOOL)arg2 outFilePath:(id*)arg3 outImageType:(long long*)arg4 ;
+(id)_chooseFileReservationForLargeDisplayableImageFileForAsset:(id)arg1 forceLarge:(BOOL)arg2 outFilePath:(id*)arg3 outImageType:(long long*)arg4 canFallbackToOriginal:(BOOL)arg5 ;
+(id)_originalItemFromAllItems:(id)arg1 ;
+(id)_penultimateItemFromAllItems:(id)arg1 ;
+(id)_filteredArrayUsingPredicate:(id)arg1 originalItems:(id)arg2 nonMatchingItems:(id*)arg3 ;
+(id)_itemMatchingFormat:(id)arg1 allItems:(id)arg2 acceptableSortedAlternatives:(id*)arg3 ;
+(void)_chooseCloudResourceTypeForFormat:(id)arg1 asset:(id)arg2 optimalCPLResourceType:(unsigned long long*)arg3 localCPLResourceType:(unsigned long long*)arg4 localCPLResourceFilePath:(id*)arg5 fileReservation:(id*)arg6 ;
+(long long)_fileResourceTypeForCloudResourceType:(unsigned long long)arg1 hasAdjustments:(BOOL)arg2 requiresUnadjustedVersion:(BOOL)arg3 ;
+(id)fileReservationForImageFileForAsset:(id)arg1 format:(id)arg2 outFilePath:(id*)arg3 outImageType:(long long*)arg4 ;
+(unsigned long long)cloudResourceTypeForAsset:(id)arg1 format:(id)arg2 filePath:(id*)arg3 imageType:(long long*)arg4 ;
-(void)dealloc;
-(id)init;
@end
