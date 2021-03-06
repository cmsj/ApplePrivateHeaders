/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PLDCFUtilities : NSObject
+(char)isRenderFileName:(id)arg1 ;
+(id)dcfRegex;
+(char)isValidDCFFileName:(id)arg1 ;
+(id)dcfCompliantNameForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 filenameMarker:(id)arg4 ;
+(id)dcfRegexForAuxiliaryResourceFilenameMarker:(id)arg1 ;
+(id)renderDCFRegex;
+(id)fileNameByRemovingRenderMarkerInFileName:(id)arg1 ;
+(char)isSpatialOverCaptureFileName:(id)arg1 ;
+(id)fileNameByRemovingSpatialOverCaptureMarkerInFileName:(id)arg1 ;
+(char)fileName:(id)arg1 matchesRegex:(id)arg2 ;
+(id)makeDCFFileNameFromFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)makeDCFFileNameByHashingFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(id)insertAuxiliaryResourceTypeMarker:(id)arg1 intoFileName:(id)arg2 ;
+(unsigned)hashForFileName:(id)arg1 createDate:(id)arg2 fileSize:(unsigned long long)arg3 ;
+(void)computeSHA256OfString:(id)arg1 intoBuffer:(char*)arg2 ;
+(id)encodeFileNameFromHash:(unsigned)arg1 ;
+(id)convertHash:(unsigned)arg1 usingPlaceValues:(id)arg2 ;
+(id)placeValuesFromBases:(id)arg1 ;
@end

