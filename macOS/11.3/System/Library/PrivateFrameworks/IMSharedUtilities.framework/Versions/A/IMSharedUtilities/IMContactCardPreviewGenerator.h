/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMContactCardPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)UTITypes;
+(id)vCardDataForURL:(id)arg1 ;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 withPreviewConstraints:(IMPreviewConstraints)arg2 error:(id*)arg3 ;
+(char)supportsBlastDoor;
+(CGImageRef)newPreviewFromSourceURL:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
+(double)contactMonogramDiameter;
+(CGImageRef)newContactCardPreviewFrom:(id)arg1 previewURL:(id)arg2 withPreviewConstraints:(IMPreviewConstraints)arg3 error:(id*)arg4 ;
+(id)contactCardPreviewPayloadsDirectoryFrom:(id)arg1 previewURL:(id)arg2 ;
+(CGImageRef)newMonogramImageForData:(id)arg1 constraints:(IMPreviewConstraints)arg2 ;
+(id)contactCardPreviewPayloadFileURLFrom:(id)arg1 previewURL:(id)arg2 withFileExtension:(id)arg3 ;
+(CGImageRef)monogramForFirstName:(id)arg1 lastName:(id)arg2 ;
+(id)generateContactPlistFrom:(id)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
@end

