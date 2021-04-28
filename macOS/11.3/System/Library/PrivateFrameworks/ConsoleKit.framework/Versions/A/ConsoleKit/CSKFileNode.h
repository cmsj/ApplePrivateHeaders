/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ConsoleKit.framework/Versions/A/ConsoleKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSMutableArray;

@interface CSKFileNode : NSObject {

	char _isDirectory;
	NSString* _name;
	NSURL* _url;
	NSMutableArray* _mutableChildren;

}

@property (nonatomic,retain) NSMutableArray * mutableChildren;              //@synthesize mutableChildren=_mutableChildren - In the implementation block
@property (assign,nonatomic) char isDirectory;                              //@synthesize isDirectory=_isDirectory - In the implementation block
@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSURL * url;                                   //@synthesize url=_url - In the implementation block
+(id)nodeWithName:(id)arg1 children:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)isDirectory;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(void)addChild:(id)arg1 ;
-(id)children;
-(NSMutableArray *)mutableChildren;
-(void)setIsDirectory:(char)arg1 ;
-(void)setMutableChildren:(NSMutableArray *)arg1 ;
@end
