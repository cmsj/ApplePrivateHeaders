/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSString, NSDictionary;

@interface _WKTextManipulationToken : NSObject {

	RetainPtr<NSDictionary<NSString *,id>>* _userInfo;
	char _excluded;
	NSString* _identifier;
	NSString* _content;

}

@property (nonatomic,copy) NSString * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * content;                                //@synthesize content=_content - In the implementation block
@property (assign,getter=isExcluded,nonatomic) char excluded;                 //@synthesize excluded=_excluded - In the implementation block
@property (nonatomic,copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * userInfo; 
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)debugDescription;
-(NSDictionary *)userInfo;
-(NSString *)identifier;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(char)isExcluded;
-(void)setExcluded:(char)arg1 ;
-(char)isEqualToTextManipulationToken:(id)arg1 includingContentEquality:(char)arg2 ;
-(id)_descriptionPreservingPrivacy:(char)arg1 ;
@end

