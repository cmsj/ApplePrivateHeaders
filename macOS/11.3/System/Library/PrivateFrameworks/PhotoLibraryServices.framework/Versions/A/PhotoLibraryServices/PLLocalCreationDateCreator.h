/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PFTimeZoneLookup;

@interface PLLocalCreationDateCreator : NSObject {

	PFTimeZoneLookup* _timeZoneLookup;

}

@property (nonatomic,readonly) PFTimeZoneLookup * timeZoneLookup;              //@synthesize timeZoneLookup=_timeZoneLookup - In the implementation block
+(void)initialize;
+(id)_gmtTranslationDictionary;
-(PFTimeZoneLookup *)timeZoneLookup;
-(id)initWithTimeZoneLookup:(id)arg1 ;
-(id)generateInferredTimeZoneOffsetForAsset:(id)arg1 ;
@end

