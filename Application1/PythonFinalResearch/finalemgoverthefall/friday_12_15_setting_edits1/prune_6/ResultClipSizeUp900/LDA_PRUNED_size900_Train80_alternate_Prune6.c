// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.81%
// test_accuracy: 70.96%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-12 13:14:13
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.623369, 0.623372,
    -0.029186, 0.029185,
    0.656357, -0.656374,
    0.250392, -0.250381,
    -0.396586, 0.396707,
    0.168111, -0.168246,
    -0.002319, 0.002325,
    0.161395, -0.161384,
    0.329433, -0.329373,
    -0.380292, 0.380198,
    -0.257635, 0.257663,
    0.343500, -0.343488,
};

float Cg_init[2] = {
    -0.230203, -0.230201
};

float xstd_init[12] = {
    0.004191, 0.001880, 0.347397, 0.121976, 0.000966, 0.000172, 0.044242, 0.129845, 0.000633, 0.000154, 0.046843, 0.135549
};

float xmean_init[12] = {
    0.010194, -0.005762, 0.433032, 1.040407, 0.003322, -0.007774, 0.009804, 0.616561, 0.003505, -0.007738, 0.013650, 0.695520
};

