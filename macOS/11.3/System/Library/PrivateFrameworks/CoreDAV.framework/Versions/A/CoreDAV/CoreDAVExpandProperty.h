/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject {

	NSSet* _propertiesToFind;
	NSString* _expandedName;
	NSString* _expandedNameSpace;

}

@property (nonatomic,retain) NSSet * propertiesToFind;                  //@synthesize propertiesToFind=_propertiesToFind - In the implementation block
@property (nonatomic,retain) NSString * expandedName;                   //@synthesize expandedName=_expandedName - In the implementation block
@property (nonatomic,retain) NSString * expandedNameSpace;              //@synthesize expandedNameSpace=_expandedNameSpace - In the implementation block
-(NSSet *)propertiesToFind;
-(void)setPropertiesToFind:(NSSet *)arg1 ;
-(id)initWithPropertiesToFind:(id)arg1 expandedName:(id)arg2 expandedNameSpace:(id)arg3 ;
-(NSString *)expandedName;
-(void)setExpandedName:(NSString *)arg1 ;
-(NSString *)expandedNameSpace;
-(void)setExpandedNameSpace:(NSString *)arg1 ;
@end

