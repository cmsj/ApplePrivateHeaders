/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectors/DataDetectors-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSURL, NSArray, NSPersonNameComponents, NSImage, NSView, NSPopover;

@interface DDActionContext : NSObject <NSCopying, NSSecureCoding> {

	CGRect _highlightFrame;
	CGRect _aimFrame;
	NSString* _eventTitle;
	NSString* _leadingText;
	NSString* _trailingText;
	NSString* _coreSpotlightUniqueIdentifier;
	NSDate* _referenceDate;
	NSString* _hostUUID;
	NSString* _authorABUUID;
	NSString* _authorEmailAddress;
	NSString* _authorName;
	NSURL* _url;
	NSString* _matchedString;
	NSArray* _allResults;
	NSString* _selectionString;
	NSPersonNameComponents* _authorNameComponents;
	NSImage* _authorPicture;
	_DDResult* _mainResult;
	char _immediate;
	char _isRightClick;
	/*^block*/id _interactionStartedHandler;
	/*^block*/id _interactionChangedHandler;
	/*^block*/id _interactionStoppedHandler;
	id _transientObject;
	char _altMenuMode;
	char _skipAnimation;
	NSArray* _allowedActionUTIs;
	NSArray* _disallowedActionUTIs;
	CGSize _targetViewSize;
	CGSize _targetScreenSize;
	NSView* _view;
	NSPopover* _popover;
	NSString* _hostProcessIdentifier;

}

@property (assign) CGRect highlightFrame;                                    //@synthesize highlightFrame=_highlightFrame - In the implementation block
@property (assign) CGRect aimFrame;                                          //@synthesize aimFrame=_aimFrame - In the implementation block
@property (copy) NSString * eventTitle;                                      //@synthesize eventTitle=_eventTitle - In the implementation block
@property (copy) NSString * leadingText;                                     //@synthesize leadingText=_leadingText - In the implementation block
@property (copy) NSString * trailingText;                                    //@synthesize trailingText=_trailingText - In the implementation block
@property (copy) NSString * coreSpotlightUniqueIdentifier;                   //@synthesize coreSpotlightUniqueIdentifier=_coreSpotlightUniqueIdentifier - In the implementation block
@property (copy) NSDate * referenceDate;                                     //@synthesize referenceDate=_referenceDate - In the implementation block
@property (copy) NSString * authorUUID;                                      //@synthesize authorABUUID=_authorABUUID - In the implementation block
@property (copy) NSString * authorEmailAddress;                              //@synthesize authorEmailAddress=_authorEmailAddress - In the implementation block
@property (copy) NSString * authorName;                                      //@synthesize authorName=_authorName - In the implementation block
@property (copy) NSPersonNameComponents * authorNameComponents;              //@synthesize authorNameComponents=_authorNameComponents - In the implementation block
@property (copy) NSImage * authorPicture;                                    //@synthesize authorPicture=_authorPicture - In the implementation block
@property (copy) NSString * hostUUID;                                        //@synthesize hostUUID=_hostUUID - In the implementation block
@property (copy) NSURL * URL;                                                //@synthesize url=_url - In the implementation block
@property (copy) NSString * matchedString;                                   //@synthesize matchedString=_matchedString - In the implementation block
@property (retain) NSArray * allResults;                                     //@synthesize allResults=_allResults - In the implementation block
@property (copy) NSString * selectionString;                                 //@synthesize selectionString=_selectionString - In the implementation block
@property (retain) _DDResult* mainResult; 
@property (assign) char immediate;                                           //@synthesize immediate=_immediate - In the implementation block
@property (assign) char isRightClick;                                        //@synthesize isRightClick=_isRightClick - In the implementation block
@property (copy) id interactionStartedHandler;                               //@synthesize interactionStartedHandler=_interactionStartedHandler - In the implementation block
@property (copy) id interactionChangedHandler;                               //@synthesize interactionChangedHandler=_interactionChangedHandler - In the implementation block
@property (copy) id interactionStoppedHandler;                               //@synthesize interactionStoppedHandler=_interactionStoppedHandler - In the implementation block
@property (copy) NSArray * allowedActionUTIs;                                //@synthesize allowedActionUTIs=_allowedActionUTIs - In the implementation block
@property (copy) NSArray * disallowedActionUTIs;                             //@synthesize disallowedActionUTIs=_disallowedActionUTIs - In the implementation block
@property (retain) id transientObject;                                       //@synthesize transientObject=_transientObject - In the implementation block
@property (assign) char altMode;                                             //@synthesize altMenuMode=_altMenuMode - In the implementation block
@property (assign) char skipAnimation;                                       //@synthesize skipAnimation=_skipAnimation - In the implementation block
@property (nonatomic,retain) NSString * hostProcessIdentifier;               //@synthesize hostProcessIdentifier=_hostProcessIdentifier - In the implementation block
@property (__weak) NSView * view;                                            //@synthesize view=_view - In the implementation block
@property (retain) NSPopover * popover;                                      //@synthesize popover=_popover - In the implementation block
+(char)supportsSecureCoding;
+(id)contextFromDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(NSView *)view;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSString *)leadingText;
-(NSString *)trailingText;
-(void)setView:(NSView *)arg1 ;
-(NSPopover *)popover;
-(void)setPopover:(NSPopover *)arg1 ;
-(CGRect)aimFrame;
-(void)setLeadingText:(NSString *)arg1 ;
-(void)setTrailingText:(NSString *)arg1 ;
-(void)setAuthorName:(NSString *)arg1 ;
-(NSString *)authorName;
-(NSString *)matchedString;
-(NSString *)hostUUID;
-(void)setCoreSpotlightUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)eventTitle;
-(void)setEventTitle:(NSString *)arg1 ;
-(NSArray *)allResults;
-(void)setAltMode:(char)arg1 ;
-(void)setImmediate:(char)arg1 ;
-(_DDResult*)mainResult;
-(id)contextForView:(id)arg1 altMode:(char)arg2 interactionStartedHandler:(/*^block*/id)arg3 interactionChangedHandler:(/*^block*/id)arg4 interactionStoppedHandler:(/*^block*/id)arg5 ;
-(void)setHighlightFrame:(CGRect)arg1 ;
-(void)setAllowedActionUTIs:(NSArray *)arg1 ;
-(void)setAllResults:(NSArray *)arg1 ;
-(void)setMainResult:(_DDResult*)arg1 ;
-(void)setSkipAnimation:(char)arg1 ;
-(CGRect)highlightFrame;
-(char)altMode;
-(NSArray *)allowedActionUTIs;
-(NSArray *)disallowedActionUTIs;
-(id)transientObject;
-(void)setTransientObject:(id)arg1 ;
-(void)setAimFrame:(CGRect)arg1 ;
-(void)setMatchedString:(NSString *)arg1 ;
-(char)immediate;
-(id)interactionStartedHandler;
-(id)interactionStoppedHandler;
-(id)interactionChangedHandler;
-(void)setHostProcessIdentifier:(NSString *)arg1 ;
-(CGSize)targetViewSize;
-(CGSize)targetScreenSize;
-(void)setHostUUID:(NSString *)arg1 ;
-(void)setAuthorUUID:(NSString *)arg1 ;
-(void)setAuthorEmailAddress:(NSString *)arg1 ;
-(void)setSelectionString:(NSString *)arg1 ;
-(void)setAuthorNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setAuthorPicture:(NSImage *)arg1 ;
-(NSString *)coreSpotlightUniqueIdentifier;
-(NSString *)authorUUID;
-(NSString *)authorEmailAddress;
-(NSString *)selectionString;
-(NSPersonNameComponents *)authorNameComponents;
-(NSImage *)authorPicture;
-(void)setInteractionStartedHandler:(id)arg1 ;
-(void)setInteractionChangedHandler:(id)arg1 ;
-(void)setInteractionStoppedHandler:(id)arg1 ;
-(void)augmentContextWithDictionary:(id)arg1 ;
-(char)isRightClick;
-(void)setIsRightClick:(char)arg1 ;
-(char)skipAnimation;
-(void)setDisallowedActionUTIs:(NSArray *)arg1 ;
-(NSString *)hostProcessIdentifier;
@end
