// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.76%
// test_accuracy: 52.08%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt']}
// generated: 2025-12-17 13:43:53
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.432303, 0.432273,
    0.293117, -0.293030,
    0.032460, -0.032469,
    -0.200157, 0.200099,
    -0.481871, 0.481880,
    -0.181032, 0.181041,
    0.110038, -0.110062,
    0.333751, -0.333731,
    -0.512144, 0.512226,
    0.242949, -0.243088,
    -0.025610, 0.025651,
    0.157483, -0.157460,
};

float Cg_init[2] = {
    -0.165730, -0.165736
};

float xstd_init[12] = {
    0.001016, 0.000080, 0.012943, 0.081823, 0.003057, 0.000833, 0.089283, 0.182151, 0.000853, 0.000112, 0.019235, 0.072587
};

float xmean_init[12] = {
    0.006459, -0.007689, 0.004979, 0.144075, 0.008621, -0.006849, 0.104074, 0.440679, 0.004357, -0.007716, 0.010123, 0.128519
};

