/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/Versions/A/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUI/PassKitUI-Structs.h>
@interface PKAutocompleteRowCache : NSObject {

	PKAutocompleteRowInfo* _rowInfos;
	long long _maxRows;
	long long _rowCount;

}

@property (nonatomic,readonly) long long rowCount;              //@synthesize rowCount=_rowCount - In the implementation block
-(void)dealloc;
-(id)init;
-(long long)rowCount;
-(void)addRowOfKind:(long long)arg1 atRow:(long long)arg2 inSection:(long long)arg3 ;
-(PKAutocompleteRowInfo*)infoForTableViewRow:(long long)arg1 ;
@end
