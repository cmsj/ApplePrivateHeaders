/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFPythonHTMLParserDelegate.h>

@class NSURL, WFPythonHTMLParser, NSDictionary, NSMutableArray, NSString, NSMutableOrderedSet;

@interface WFHTMLToMarkdown : NSObject <WFPythonHTMLParserDelegate> {

	char _unicodeSnob;
	char _escapeSnob;
	char _linksEachParagraph;
	char _skipInternalLinks;
	char _inlineLinks;
	char _ignoreLinks;
	char _ignoreImages;
	char _ignoreEmphasis;
	char _start;
	char _space;
	char _pre;
	char _startpre;
	char _code;
	char _lastWasNewline;
	char _lastWasList;
	NSURL* _baseURL;
	long long _bodyWidth;
	WFPythonHTMLParser* _parser;
	NSDictionary* _nameToCodepointMapping;
	NSDictionary* _unifiableN;
	NSMutableArray* _outTextList;
	NSString* _outText;
	long long _quiet;
	long long _p_p;
	long long _outCount;
	NSMutableArray* _a;
	NSMutableArray* _aStack;
	NSString* _maybeAutomaticLink;
	long long _aCount;
	NSMutableArray* _list;
	long long _blockquote;
	long long _style;
	NSString* _abbreviationTitle;
	NSString* _abbreviationData;
	NSMutableOrderedSet* _abbreviationList;
	NSString* _ulItemMark;
	NSString* _emphasisMark;
	NSString* _strongMark;

}

@property (nonatomic,retain) WFPythonHTMLParser * parser;                         //@synthesize parser=_parser - In the implementation block
@property (nonatomic,retain) NSDictionary * nameToCodepointMapping;               //@synthesize nameToCodepointMapping=_nameToCodepointMapping - In the implementation block
@property (nonatomic,retain) NSDictionary * unifiableN;                           //@synthesize unifiableN=_unifiableN - In the implementation block
@property (nonatomic,retain) NSMutableArray * outTextList;                        //@synthesize outTextList=_outTextList - In the implementation block
@property (nonatomic,copy) NSString * outText;                                    //@synthesize outText=_outText - In the implementation block
@property (assign,nonatomic) long long quiet;                                     //@synthesize quiet=_quiet - In the implementation block
@property (assign,nonatomic) long long p_p;                                       //@synthesize p_p=_p_p - In the implementation block
@property (assign,nonatomic) long long outCount;                                  //@synthesize outCount=_outCount - In the implementation block
@property (assign,nonatomic) char start;                                          //@synthesize start=_start - In the implementation block
@property (assign,nonatomic) char space;                                          //@synthesize space=_space - In the implementation block
@property (a,nonatomic,retain) NSMutableArray * a;                                //@synthesize a=_a - In the implementation block
@property (nonatomic,retain) NSMutableArray * aStack;                             //@synthesize aStack=_aStack - In the implementation block
@property (nonatomic,copy) NSString * maybeAutomaticLink;                         //@synthesize maybeAutomaticLink=_maybeAutomaticLink - In the implementation block
@property (assign,nonatomic) long long aCount;                                    //@synthesize aCount=_aCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * list;                               //@synthesize list=_list - In the implementation block
@property (assign,nonatomic) long long blockquote;                                //@synthesize blockquote=_blockquote - In the implementation block
@property (assign,nonatomic) char pre;                                            //@synthesize pre=_pre - In the implementation block
@property (assign,nonatomic) char startpre;                                       //@synthesize startpre=_startpre - In the implementation block
@property (assign,nonatomic) char code;                                           //@synthesize code=_code - In the implementation block
@property (assign,nonatomic) char lastWasNewline;                                 //@synthesize lastWasNewline=_lastWasNewline - In the implementation block
@property (assign,nonatomic) char lastWasList;                                    //@synthesize lastWasList=_lastWasList - In the implementation block
@property (assign,nonatomic) long long style;                                     //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * abbreviationTitle;                          //@synthesize abbreviationTitle=_abbreviationTitle - In the implementation block
@property (nonatomic,copy) NSString * abbreviationData;                           //@synthesize abbreviationData=_abbreviationData - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * abbreviationList;              //@synthesize abbreviationList=_abbreviationList - In the implementation block
@property (nonatomic,copy) NSString * ulItemMark;                                 //@synthesize ulItemMark=_ulItemMark - In the implementation block
@property (nonatomic,copy) NSString * emphasisMark;                               //@synthesize emphasisMark=_emphasisMark - In the implementation block
@property (nonatomic,copy) NSString * strongMark;                                 //@synthesize strongMark=_strongMark - In the implementation block
@property (nonatomic,retain) NSURL * baseURL;                                     //@synthesize baseURL=_baseURL - In the implementation block
@property (assign,nonatomic) char unicodeSnob;                                    //@synthesize unicodeSnob=_unicodeSnob - In the implementation block
@property (assign,nonatomic) char escapeSnob;                                     //@synthesize escapeSnob=_escapeSnob - In the implementation block
@property (assign,nonatomic) char linksEachParagraph;                             //@synthesize linksEachParagraph=_linksEachParagraph - In the implementation block
@property (assign,nonatomic) long long bodyWidth;                                 //@synthesize bodyWidth=_bodyWidth - In the implementation block
@property (assign,nonatomic) char skipInternalLinks;                              //@synthesize skipInternalLinks=_skipInternalLinks - In the implementation block
@property (assign,nonatomic) char inlineLinks;                                    //@synthesize inlineLinks=_inlineLinks - In the implementation block
@property (assign,nonatomic) char ignoreLinks;                                    //@synthesize ignoreLinks=_ignoreLinks - In the implementation block
@property (assign,nonatomic) char ignoreImages;                                   //@synthesize ignoreImages=_ignoreImages - In the implementation block
@property (assign,nonatomic) char ignoreEmphasis;                                 //@synthesize ignoreEmphasis=_ignoreEmphasis - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)code;
-(void)close;
-(NSURL *)baseURL;
-(long long)style;
-(char)start;
-(void)setCode:(char)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSMutableArray *)list;
-(void)p;
-(char)space;
-(void)setSpace:(char)arg1 ;
-(id)initWithBaseURL:(id)arg1 ;
-(void)setA:(NSMutableArray *)arg1 ;
-(NSMutableArray *)a;
-(void)setStart:(char)arg1 ;
-(void)setBaseURL:(NSURL *)arg1 ;
-(WFPythonHTMLParser *)parser;
-(void)addOutput:(id)arg1 ;
-(long long)quiet;
-(void)setQuiet:(long long)arg1 ;
-(void)setEmphasisMark:(NSString *)arg1 ;
-(NSString *)emphasisMark;
-(void)setParser:(WFPythonHTMLParser *)arg1 ;
-(void)setList:(NSMutableArray *)arg1 ;
-(void)output:(id)arg1 ;
-(void)parser:(id)arg1 foundStartTag:(id)arg2 attributes:(id)arg3 ;
-(void)parser:(id)arg1 foundData:(id)arg2 ;
-(void)parser:(id)arg1 foundEndTag:(id)arg2 ;
-(void)parser:(id)arg1 foundEntityRef:(id)arg2 ;
-(void)parser:(id)arg1 foundCharacterRef:(id)arg2 ;
-(id)handleHTML:(id)arg1 ;
-(char)skipwrap:(id)arg1 ;
-(id)wrapText:(id)arg1 toWidth:(long long)arg2 ;
-(char)onlywhite:(id)arg1 ;
-(id)optwrap:(id)arg1 ;
-(id)charref:(id)arg1 ;
-(id)entityref:(id)arg1 ;
-(id)previousIndex:(id)arg1 ;
-(int)tagHeaderNumber:(id)arg1 ;
-(id)escapeMD:(id)arg1 ;
-(id)escapeMDSection:(id)arg1 snob:(char)arg2 ;
-(void)handleTag:(id)arg1 attributes:(id)arg2 start:(char)arg3 ;
-(void)pbr;
-(void)output:(id)arg1 pureData:(char)arg2 force:(id)arg3 ;
-(NSDictionary *)nameToCodepointMapping;
-(unsigned short)nameToCodepoint:(id)arg1 ;
-(id)unifiable;
-(NSDictionary *)unifiableN;
-(char)unicodeSnob;
-(void)setUnicodeSnob:(char)arg1 ;
-(char)escapeSnob;
-(void)setEscapeSnob:(char)arg1 ;
-(char)linksEachParagraph;
-(void)setLinksEachParagraph:(char)arg1 ;
-(long long)bodyWidth;
-(void)setBodyWidth:(long long)arg1 ;
-(char)skipInternalLinks;
-(void)setSkipInternalLinks:(char)arg1 ;
-(char)inlineLinks;
-(void)setInlineLinks:(char)arg1 ;
-(char)ignoreLinks;
-(void)setIgnoreLinks:(char)arg1 ;
-(char)ignoreImages;
-(void)setIgnoreImages:(char)arg1 ;
-(char)ignoreEmphasis;
-(void)setIgnoreEmphasis:(char)arg1 ;
-(void)setNameToCodepointMapping:(NSDictionary *)arg1 ;
-(void)setUnifiableN:(NSDictionary *)arg1 ;
-(NSMutableArray *)outTextList;
-(void)setOutTextList:(NSMutableArray *)arg1 ;
-(NSString *)outText;
-(void)setOutText:(NSString *)arg1 ;
-(long long)p_p;
-(void)setP_p:(long long)arg1 ;
-(long long)outCount;
-(void)setOutCount:(long long)arg1 ;
-(NSMutableArray *)aStack;
-(void)setAStack:(NSMutableArray *)arg1 ;
-(NSString *)maybeAutomaticLink;
-(void)setMaybeAutomaticLink:(NSString *)arg1 ;
-(long long)aCount;
-(void)setACount:(long long)arg1 ;
-(long long)blockquote;
-(void)setBlockquote:(long long)arg1 ;
-(char)pre;
-(void)setPre:(char)arg1 ;
-(char)startpre;
-(void)setStartpre:(char)arg1 ;
-(char)lastWasNewline;
-(void)setLastWasNewline:(char)arg1 ;
-(char)lastWasList;
-(void)setLastWasList:(char)arg1 ;
-(NSString *)abbreviationTitle;
-(void)setAbbreviationTitle:(NSString *)arg1 ;
-(NSString *)abbreviationData;
-(void)setAbbreviationData:(NSString *)arg1 ;
-(NSMutableOrderedSet *)abbreviationList;
-(void)setAbbreviationList:(NSMutableOrderedSet *)arg1 ;
-(NSString *)ulItemMark;
-(void)setUlItemMark:(NSString *)arg1 ;
-(NSString *)strongMark;
-(void)setStrongMark:(NSString *)arg1 ;
@end

