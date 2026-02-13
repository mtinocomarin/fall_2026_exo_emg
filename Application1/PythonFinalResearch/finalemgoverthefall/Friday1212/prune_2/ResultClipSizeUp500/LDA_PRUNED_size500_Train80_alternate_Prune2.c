// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_2\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.15%
// test_accuracy: 74.31%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 15:46:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.595675, 0.595622,
    -0.261534, 0.261565,
    0.376507, -0.376525,
    0.649210, -0.649189,
    0.675898, -0.675777,
    -0.886778, 0.886642,
    0.004814, -0.004801,
    0.041462, -0.041464,
    -0.423109, 0.422946,
    0.443866, -0.443500,
    -0.414286, 0.414156,
    0.125789, -0.125954,
};

float Cg_init[2] = {
    -0.286778, -0.286749
};

float xstd_init[12] = {
    0.003846, 0.001436, 0.104728, 0.168870, 0.001528, 0.000451, 0.026448, 0.077788, 0.001524, 0.000089, 0.016737, 0.064427
};

float xmean_init[12] = {
    0.009799, -0.006226, 0.170618, 0.581037, 0.003141, -0.007742, 0.006370, 0.048000, 0.003223, -0.007808, 0.004395, 0.066593
};

