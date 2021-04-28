/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableString, NSMutableDictionary;

@interface AMFFeedElement : NSObject {

	NSString* _name;
	NSDictionary* _attributes;
	NSString* _namespaceURI;
	NSMutableString* _content;
	NSMutableDictionary* _children;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSString * namespaceURI;                       //@synthesize namespaceURI=_namespaceURI - In the implementation block
@property (nonatomic,copy) NSString * content;                            //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * children;              //@synthesize children=_children - In the implementation block
-(id)description;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)attributes;
-(NSDictionary *)children;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSString *)content;
-(NSString *)namespaceURI;
-(id)childWithName:(id)arg1 ;
-(id)textOfChildWithName:(id)arg1 ;
-(id)childrenWithName:(id)arg1 ;
-(void)setNamespaceURI:(NSString *)arg1 ;
-(void)addChildElement:(id)arg1 ;
-(void)appendContent:(id)arg1 ;
-(id)textOfChildWithName:(id)arg1 namespace:(id)arg2 ;
-(id)childrenWithName:(id)arg1 namespace:(id)arg2 ;
@end
