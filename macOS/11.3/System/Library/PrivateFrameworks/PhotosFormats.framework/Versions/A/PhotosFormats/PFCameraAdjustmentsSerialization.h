/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosFormats.framework/Versions/A/PhotosFormats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PFCameraAdjustmentsSerialization : NSObject
+(Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3 ;
+(id)deserializedAdjustmentsFromData:(id)arg1 error:(id*)arg2 ;
+(char)deserializeDictionary:(id)arg1 toFilters:(id*)arg2 portraitMetadata:(id*)arg3 error:(id*)arg4 ;
+(id)serializedAdjustments:(id)arg1 error:(id*)arg2 ;
+(id)serializedDictionaryForFilters:(id)arg1 portraitMetadata:(id)arg2 error:(id*)arg3 ;
+(id)_errorWithMessage:(id)arg1 code:(long long)arg2 ;
@end

