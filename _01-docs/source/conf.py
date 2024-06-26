# Configuration file for the Sphinx documentation builder.
#
# This file only contains a selection of the most common options. For a full
# list see the documentation:
# https://www.sphinx-doc.org/en/master/usage/configuration.html

# -- Path setup --------------------------------------------------------------

# If extensions (or modules to document with autodoc) are in another directory,
# add these directories to sys.path here. If the directory is relative to the
# documentation root, use os.path.abspath to make it absolute, like shown here.
#
# import os
# import sys
# sys.path.insert(0, os.path.abspath('.'))


# -- Project information -----------------------------------------------------

project = 'Tiny e-lab extension'
copyright = '2022, J.Soranzo'
author = 'J.Soranzo'


# -- General configuration ---------------------------------------------------

# Add any Sphinx extension module names here, as strings. They can be
# extensions coming with Sphinx (named 'sphinx.ext.*') or your custom
# ones.
extensions = [ 'sphinx.ext.graphviz', 'sphinxcontrib.plantuml' , 'sphinx.ext.todo'
]

todo_include_todos = True

plantuml = 'java -jar c:/plantuml/plantuml.jar'

plantuml_output_format = 'svg_img'
graphviz_output_format = "svg"

# Add any paths that contain templates here, relative to this directory.
templates_path = ['_templates']

# List of patterns, relative to source directory, that match files and
# directories to ignore when looking for source files.
# This pattern also affects html_static_path and html_extra_path.
exclude_patterns = []


# -- Options for HTML output -------------------------------------------------

# The theme to use for HTML and HTML Help pages.  See the documentation for
# a list of builtin themes.
#
html_theme = 'greencloud'
html_theme_options = {
    #'stickysidebar ': True, # pas supportee par nature
    'externalrefs' : 'false',
    'highlighttoc' : 'true',
    'lighter_header_decor' : 'false',
    'borderless_decor' : 'false',
    'default_layout_text_size' : '100%',
    'sidebar_master_title' : 'master title',
    'sidebar_root_title' : 'root_titer',
    'sidebar_prev_title' : 'Page précédente',
    'sidebar_next_title' : 'Page suivante',
    'max_width' : '80%'
}

# Add any paths that contain custom static files (such as style sheets) here,
# relative to this directory. They are copied after the builtin static files,
# so a file named "default.css" will overwrite the builtin "default.css".
html_static_path = ['_static']