/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/Versions/A/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMSharedUtilities/IMImagePreviewGenerator.h>
#import <IMSharedUtilities/IMPreviewGeneratorProtocol.h>
#import <IMSharedUtilities/IMUTITypeInformation.h>

@interface IMPassPreviewGenerator : IMImagePreviewGenerator <IMPreviewGeneratorProtocol, IMUTITypeInformation>
+(id)temporaryDirectory;
+(char)isSupported;
+(id)UTITypes;
+(id)metadataExtension;
+(char)generatesPreview;
+(char)generatesMetadata;
@end

