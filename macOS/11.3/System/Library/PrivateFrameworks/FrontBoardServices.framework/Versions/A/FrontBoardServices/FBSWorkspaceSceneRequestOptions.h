/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString, FBSSceneSpecification, FBSSceneClientSettings;

@interface FBSWorkspaceSceneRequestOptions : NSObject <BSXPCSecureCoding> {

	char _keyboardScene;
	NSString* _identifier;
	FBSSceneSpecification* _specification;
	FBSSceneClientSettings* _initialClientSettings;

}

@property (assign,getter=isKeyboardScene,nonatomic) char keyboardScene;                 //@synthesize keyboardScene=_keyboardScene - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) FBSSceneSpecification * specification;                       //@synthesize specification=_specification - In the implementation block
@property (nonatomic,copy) FBSSceneClientSettings * initialClientSettings;              //@synthesize initialClientSettings=_initialClientSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsBSXPCSecureCoding;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
-(FBSSceneSpecification *)specification;
-(void)setSpecification:(FBSSceneSpecification *)arg1 ;
-(FBSSceneClientSettings *)initialClientSettings;
-(void)setInitialClientSettings:(FBSSceneClientSettings *)arg1 ;
-(char)isKeyboardScene;
-(void)setKeyboardScene:(char)arg1 ;
@end

