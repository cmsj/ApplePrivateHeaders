/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>

@class TSPData;

@interface TSPDatabaseDataObject : TSPObject {

	TSPData* _data;

}

@property (nonatomic,readonly) TSPData * data;              //@synthesize data=_data - In the implementation block
-(TSPData *)data;
-(void)loadFromUnarchiver:(id)arg1 ;
@end

