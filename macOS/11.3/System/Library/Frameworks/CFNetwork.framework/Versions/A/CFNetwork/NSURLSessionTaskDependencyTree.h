/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/Versions/A/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary, __NSCFURLSessionTaskDependencyTreeNode;

@interface NSURLSessionTaskDependencyTree : NSObject {

	NSURL* _mainDocumentURL;
	NSMutableDictionary* _dependencies;
	__NSCFURLSessionTaskDependencyTreeNode* _effectiveTree;

}

@property (nonatomic,retain) NSURL * mainDocumentURL;              //@synthesize mainDocumentURL=_mainDocumentURL - In the implementation block
+(id)dependencyTreeDefaultWeb;
+(id)dependencyTreeWithJSONData:(id)arg1 error:(id*)arg2 ;
+(id)dependencyTreeWithMainDocumentURL:(id)arg1 dependencyDescriptions:(id)arg2 ;
-(void)dealloc;
-(NSURL *)mainDocumentURL;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
@end
