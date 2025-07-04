// Copyright (c) 2022-2025 Manuel Schneider

#pragma once
#include <albert/globalqueryhandler.h>
#include <albert/extensionplugin.h>

class Plugin : public albert::util::ExtensionPlugin,
               public albert::GlobalQueryHandler
{
    ALBERT_PLUGIN

public:

    Plugin();
    std::vector<albert::RankItem> handleGlobalQuery(const albert::Query &) override;

private:

    QStringList valid_tlds;

};
