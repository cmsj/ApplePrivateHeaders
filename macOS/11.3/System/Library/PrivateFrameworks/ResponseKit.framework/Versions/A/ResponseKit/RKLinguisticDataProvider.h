/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/Versions/A/ResponseKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSMutableDictionary;

@interface RKLinguisticDataProvider : NSObject <RKPolarityDataProvider> {

	NSMutableDictionary* _polarityMapsByLanguageID;

}

@property (retain) NSMutableDictionary * polarityMapsByLanguageID;              //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
-(id)init;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(void)setPolarityMapsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

