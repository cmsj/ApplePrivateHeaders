/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOEnvironmentInfo.h>

@class NSMapTable, NSString;

@interface GEOCustomEnvironmentInfo : GEOEnvironmentInfo {

	NSMapTable* _overrideURLs;
	NSString* _uuid;

}
-(char)isActive;
-(id)dictionaryRepresentation;
-(void)save;
-(id)initWithName:(id)arg1 displayName:(id)arg2 dictionaryRepresentation:(id)arg3 ;
-(void)makeActive;
-(void)updateWithURLs:(id)arg1 ;
-(id)overrideURLs;
-(void)delete;
@end

