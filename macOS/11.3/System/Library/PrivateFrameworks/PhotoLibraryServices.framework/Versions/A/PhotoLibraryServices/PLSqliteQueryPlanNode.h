/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PLSqliteQueryPlanNode : NSObject {

	int _identifier;
	int _parentIdentifier;
	int _unused;
	NSString* _nodeDescription;

}

@property (readonly) int identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) int parentIdentifier;                         //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) int unused;                                   //@synthesize unused=_unused - In the implementation block
@property (copy,readonly) NSString * nodeDescription;              //@synthesize nodeDescription=_nodeDescription - In the implementation block
-(int)identifier;
-(int)parentIdentifier;
-(int)unused;
-(NSString *)nodeDescription;
-(id)initWithIdentifier:(int)arg1 parentIdentifier:(int)arg2 unused:(int)arg3 nodeDescription:(id)arg4 ;
@end

