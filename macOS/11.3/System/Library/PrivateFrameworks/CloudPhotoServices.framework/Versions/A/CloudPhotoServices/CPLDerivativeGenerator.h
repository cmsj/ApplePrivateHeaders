/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoServices.framework/Versions/A/CloudPhotoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPLDerivativeGenerator
@required
+(char)canGenerateImageDerivativesFromUTI:(id)arg1;
+(char)isMovieUTI:(id)arg1;
+(void)generateDerivativeResourcesFromInputResource:(id)arg1 withAdjustments:(id)arg2 destinationDirectory:(id)arg3 derivativesFilter:(id)arg4 completionHandler:(/*^block*/id)arg5;
+(char)isUnsupportedOriginalFormatError:(id)arg1;

@end

