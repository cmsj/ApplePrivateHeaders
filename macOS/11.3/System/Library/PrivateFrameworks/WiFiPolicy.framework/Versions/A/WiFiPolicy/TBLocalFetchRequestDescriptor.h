/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/Versions/A/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFetchRequest;

@interface TBLocalFetchRequestDescriptor : NSObject {

	NSFetchRequest* _fetchRequest;
	NSFetchRequest* _localFetchRequest;

}

@property (nonatomic,retain) NSFetchRequest * localFetchRequest;              //@synthesize localFetchRequest=_localFetchRequest - In the implementation block
@property (nonatomic,readonly) NSFetchRequest * fetchRequest;                 //@synthesize fetchRequest=_fetchRequest - In the implementation block
-(NSFetchRequest *)fetchRequest;
-(id)initWithFetchRequest:(id)arg1 ;
-(NSFetchRequest *)localFetchRequest;
-(void)setLocalFetchRequest:(NSFetchRequest *)arg1 ;
@end

