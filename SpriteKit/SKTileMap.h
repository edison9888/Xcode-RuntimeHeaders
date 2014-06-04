/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SpriteKit/SKNode.h>

#import "NSXMLParserDelegate-Protocol.h"

@class NSMutableArray, NSString, NSXMLParser;

// Not exported
@interface SKTileMap : SKNode <NSXMLParserDelegate>
{
    BOOL _loading;
    BOOL _loaded;
    BOOL _skipSprites;
    BOOL _isometric;
    NSXMLParser *_parser;
    int _mapWidth;
    int _mapHeight;
    int _mapTileWidth;
    int _mapTileHeight;
    int _firstGid;
    int _tileWidth;
    int _tileHeight;
    int _spacing;
    int _margin;
    NSString *_imgName;
    NSString *_tilesetName;
    int _imgWidth;
    int _imgHeight;
    int _tileIndex;
    NSString *_layerName;
    int _layerWidth;
    int _layerHeight;
    NSMutableArray *_layerTiles;
    NSString *_mapName;
}

+ (id)tileMapWithName:(id)arg1;
- (void).cxx_destruct;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidEndDocument:(id)arg1;
- (void)parserDidStartDocument:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)loadMap;
@property(readonly, nonatomic) struct CGSize mapSize;
@property(readonly, nonatomic) struct CGSize tileSize;
- (id)textureForGid:(unsigned int)arg1;
- (id)tileAtGridLocationX:(unsigned int)arg1 y:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

