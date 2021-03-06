/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Photos.framework/Versions/A/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHCollectionList.h>

@class NSDate;

@interface PHMomentList : PHCollectionList {

	short _granularityLevel;
	int _sortIndex;
	NSDate* _representativeDate;

}

@property (nonatomic,readonly) int sortIndex;                            //@synthesize sortIndex=_sortIndex - In the implementation block
@property (nonatomic,readonly) short granularityLevel;                   //@synthesize granularityLevel=_granularityLevel - In the implementation block
@property (nonatomic,readonly) NSDate * representativeDate;              //@synthesize representativeDate=_representativeDate - In the implementation block
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(char)managedObjectSupportsTrashedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
-(id)description;
-(id)localizedTitle;
-(char)hasLocalizedTitle;
-(char)hasLocationInfo;
-(char)collectionHasFixedOrder;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(Class)changeRequestClass;
-(long long)collectionListType;
-(id)localizedLocationNames;
-(short)granularityLevel;
-(NSDate *)representativeDate;
-(int)sortIndex;
@end

